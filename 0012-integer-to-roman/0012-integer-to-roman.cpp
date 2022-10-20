class Solution {
public:
    string intToRoman(int num) {
        string Thousands[]={"","M","MM","MMM"};
        string Hundreds[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string Tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string Units[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        return Thousands[num/1000]+Hundreds[(num%1000)/100]+Tens[(num%100)/10]+Units[(num%10)];
    }
};