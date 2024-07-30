def server_log_file(log_file):
    
    a_dict={}
    
    log=log_file.split("\n")
    
    for lines in log :
        line=lines.split()    
        action=line[1]
        
        a_dict[action]=a_dict.get(action,0)+1
      
    return a_dict


log_file = """2024-06-05T08:00:00 login
2024-06-05T08:05:00 logout
2024-06-05T08:10:00 login
2024-06-05T08:15:00 logout
2024-06-05T08:20:00 login"""

print(server_log_file(log_file))
