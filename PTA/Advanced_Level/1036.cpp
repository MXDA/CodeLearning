#include<bits/stdc++.h>
using namespace std;

int main() {
	string name, gender, id;
	int score, m_score, f_score;
	string m, f, m_id, f_id;
	int t;
		cin >> t;
	while(t--) {
		cin >> name >> gender >> id >> score;
		if(gender == "M" && (!m.size() || m_score > score)) {
			m_score = score, m = name;
			m_id = id;
		}
		if(gender == "F" && (!f.size() || f_score < score)) {
			f_score = score, f = name;
			f_id = id;
		}
	}
	if(f.empty()) puts("Absent");
	else cout << f << ' ' << f_id << endl;
	if(m.empty()) puts("Absent");
	else cout << m << ' ' << m_id << endl;
	if(f.size() && m.size()) cout << f_score - m_score << endl;
	else puts("NA");
	return 0;
}
