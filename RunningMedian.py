#Calculates the Running median times out after 3 cases.
number_of_elements = int(raw_input())
median_list = list()

for i in range(1,number_of_elements+1):
    current_element=int(raw_input())
    median_list.append(current_element)
    median_list=sorted(median_list)
    if len(median_list) % 2 == 0:
        print float((median_list[len(median_list)/2]+ median_list[(len(median_list)/2)-1])/2.0)
    else:
        print float(median_list[len(median_list)/2])
