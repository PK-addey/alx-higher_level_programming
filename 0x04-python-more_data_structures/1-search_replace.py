#!/usr/bin/python3
def search_replace(my_list, search, replace):
    # Return a new list with search replaced by replace
    return [replace if x == search else x for x in my_list]
