class Solution:
    def reformatDate(self, date: str) -> str:
        
        mon={"Jan":"01",
             "Feb":"02",
             "Mar":"03",
             "Apr":"04",
             "May":"05",
             "Jun":"06",
             "Jul":"07",
             "Aug":"08", 
             "Sep":"09", 
             "Oct":"10", 
             "Nov":"11", 
             "Dec":"12"   }

        dmy=date.split()
        D=dmy[0]
        d=""
        for i in D:
            if i.isdigit():
                d+=i
        
        if int(int(d)/10)==0:
            d='0'+d

        m=mon[dmy[1]]
        y=dmy[-1]
        
        return str(y)+"-"+m+"-"+str(d)
