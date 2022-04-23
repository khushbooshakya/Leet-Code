class Solution {
    unordered_map<string, string> um;
    int len = 6;
    
    string generate_random_code(string longUrl) {
        string code = "";
        
        for(int i=0; i<len; i++) {
            bool type = rand() % 3;
            
            if(type == 0) { // number
                code += char(rand() % 10 + 48);
            } else if(type == 1) { // lowercase char
                code += char(rand() % 26 + 97);
            } else { // uppercase char
                code += char(rand() % 26 + 65);
            }
        }
        
        if(um.find(code) != um.end()) {
            return generate_random_code(longUrl);
        } else {
            um[code] = longUrl;
            return code;
        }
    }
    
    string get_code(string shortUrl) {
        int n = shortUrl.size();
        return shortUrl.substr(n-len, len);
    }
    
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string tiny_url = "http://tinyurl.com/";
        string suffix = generate_random_code(longUrl);
        return tiny_url += suffix;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string code = get_code(shortUrl);
        return um[code];
    }
};
