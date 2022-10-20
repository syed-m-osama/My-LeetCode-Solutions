class Solution {
public:
    
    string intToRoman(int num) {
        // int val[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        // string sym[] = {'I','IV','V','IX','X','XL','L','XC','C','CD','D','CM','M'};
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
    
};









