#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string girl, gid;
    int gscore;
    string boy, bid;
    int bscore;
	cin >> n;
    for(int i = 0; i < n; ++i) {
	string name, sex, id;
	int score;
	    cin >> name >> sex >> id >> score;
	if(sex == "F") {
	    if(!girl.size() || gscore < score) {
		gscore = score;
		girl = name;
		gid = id;
	    }
	} else {
	    if(!boy.size() || bscore > score) {
		bscore = score;
		boy = name;
		bid = id;
	    }
	}
    }

    if(!girl.size()) puts("Absent");
    else cout << girl << ' ' << gid << endl;
    if(!boy.size()) puts("Absent");
    else cout << boy << ' ' << bid << endl;
    if(girl.size() && boy.size()) cout << gscore - bscore << endl;
    else puts("NA");
    return 0;
}
