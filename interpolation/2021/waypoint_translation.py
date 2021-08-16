#!/usr/bin/env python

import sys
import numpy as np

a = 0
b = 0
a_trig = False
b_trig = False
f_trig = False
file_name = ''
path = ''

def parse_txt(path):
    f = open(path, "r")
    data = f.read()
    f.close()

    data = data.rstrip().split('\n')
    data = [x.split(' ') for x in data]
    #print(data)
    data = np.array(data, np.float64)

    return data


if __name__ == "__main__":
    file_name = sys.argv[1]
    scale = 1.0

    if len(file_name) == 0:
        print('The file is not exist')
        exit(-1)

    if len(sys.argv) == 3:
	scale = float(sys.argv[2])


    path = parse_txt(file_name)

    k_city_start_position = path[0]
    # k_city_start_position = np.array([955537.894297, 1956944.4206, 0],np.float64) # for parking


    # school_start_position = np.array([955566.644773, 1956921.99891, 0],np.float64) # school(center)
    # school_start_position = np.array([955576.601804, 1956925.47369, 0],np.float64) # school(corner-up)

    print("k_city_start_position : {}".format(k_city_start_position))
    print("school_start_position : {}".format(school_start_position))

    #offset = np.array([19923.241491, 40945.30306, 0])
    offset = school_start_position - k_city_start_position

    print("offset : {}".format(offset))
    
    #### for rotation ####
    # final1(100), final2(80), parking(0), delivery(60)
    theta = 60; # degree
    theta = theta * np.pi / 180
    rotation_matrix = np.array([[np.cos(theta), np.sin(theta), 0],[-np.sin(theta), np.cos(theta), 0], [0, 0, 1]], np.float64)


    scale_matrix = np.array([[scale, 0, 0],[0, scale, 0], [0, 0, 1]], np.float64)
    
    rotation_path = path - k_city_start_position

    # TRS

    rotation_path = np.dot(rotation_path, rotation_matrix)
    rotation_path = np.dot(rotation_path, scale_matrix)


    rotation_path += k_city_start_position
    new_path = rotation_path + offset 



    ######################
    
    
    #### for parallel translation ####
   
    
    ##################################

    f = open(file_name.split('.')[0]+'.trs.txt','w')
    out_str = ''
    for point in new_path:
        out_str += str(point[0]) + ' ' + str(point[1]) + ' ' + str(int(point[2])) + '\n'
    f.write(out_str)
    f.close()
