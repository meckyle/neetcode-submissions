class Solution {
public:


//For this solution, we will need to do the following:
//["Hello", "World"] --> ["5#Hello5#World"]


    string encode(vector<string>& strs) {


        string encoded_string;


        for(int i = 0; i < strs.size(); i++){


            int number = strs[i].size();


            string Snumber = to_string(number);


            encoded_string += Snumber;
            encoded_string += '#';
            encoded_string += strs[i];


        }


        return encoded_string;
    }


   
//For this solution we will need to convert:
//["5#Hello5#World"] --> ["Hello", "World"]


vector<string> decode(string s) {
    vector<string> decoded;
    int i = 0;

    while (i < s.size()) {

        // 1. read number
        string numStr = "";
        while (i < s.size() && isdigit(s[i])) {
            numStr += s[i];
            i++;
        }

        int len = stoi(numStr);

        // 2. skip '#'
        i++;

        // 3. read string of length len
        string word = "";
        for (int k = 0; k < len; k++) {
            word += s[i];
            i++;
        }

        decoded.push_back(word);
    }

    return decoded;
}

};



