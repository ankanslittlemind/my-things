roman = input("Enter Roman numeral: ")

def romanToInt(roman):
        value = {
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000
        }
        
        N = len(roman)
        i = N-1
        ans = 0
        
        while i>=0:
            
            if i<N-1  and value[roman[i]] < value[roman[i+1]]:
                ans -= value[roman[i]]
            else:
                ans += value[roman[i]]
            i -= 1
            
        return ans

print("Integer value of Roman numeral:", romanToInt(roman))