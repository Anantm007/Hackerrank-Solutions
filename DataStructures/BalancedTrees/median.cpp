#include<bits/stdc++.h>

using namespace std;

void print(multiset<int>::iterator &curr, int num_els) 
{
    if (num_els > 0) {
        if (0 != num_els % 2) {
            std::cout << *curr << std::endl;
        } else {
            auto next = curr;
            ++next;
            double val = (((double)*curr) + ((double)*next)) / 2.0;
            std::cout << setprecision(14) << val << std::endl;
        }
    } else {
        std::cout << "Wrong!" << std::endl;
    }
}

void median(vector<char> s,vector<int> X) 
{
    int num = s.size();
    
    multiset<int> mset;
    int num_els = 0;
    auto center = mset.end();
    
    for (int i = 0; i < num; ++i) {
        if ('a' == s[i]) {
            mset.insert(X[i]);
            
            if (num_els < 1) {
                center = mset.begin();
            } else if (0 != (num_els % 2) && X[i] < *center ) {
                --center;
            } else if (0 == (num_els % 2) && X[i] >= *center) {
                ++center;
            }
            
            ++num_els;
            
            print(center, num_els);
        } else if ('r' == s[i]) {
            auto srch = mset.find(X[i]);
            if (srch != mset.end()) {
                //
                if (srch == center) {
                    if (num_els > 1) {
                        if (0 == num_els % 2) {
                            ++center;
                        } else {
                            --center;
                        }
                    } else {
                        center = mset.end();
                    }
                } else {
                    if (0 == (num_els % 2) && (*srch) <= (*center)) {
                        ++center;
                    } else if (0 != (num_els % 2) && (*srch) > (*center)) {
                        --center;
                    }
                }
                
                mset.erase(srch);
                --num_els;
                
                print(center, num_els);
            } else {
                std::cout << "Wrong!" << std::endl;
            }
        }
    }
}
    
    

int main()
{

	int N;
	cin >> N;
	
	vector<char> s;
    vector<int> X;
	char temp;
    int tempint;
	for(int i = 0; i < N; i++){
		cin >> temp >> tempint;
        s.push_back(temp);
        X.push_back(tempint);
	}
	
	median(s,X);
	return 0;
}


