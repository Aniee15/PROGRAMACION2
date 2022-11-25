if (auto it = m.find(10); it != m.end()) { return it ->second.size(); }

if (char buf[10]; std::fgets(buf, 10, stdin)) { m[0] += buf; }

if (std::lock_guard lock(mx); shared_flag) { unsafe_ping(); shared_flag = false; }

if (int s; int count = ReadBytesWithSignal(&s)) { publish(count); raise(s); }

if (auto keywords = {"if", "for", "while"});
	std::any_of(keywords.begin(), keywords.end(),
				[&s](const char* kw) { return s == kw;})) {
	std::cerr << "Token debe de ser una palabra reservada\n";
	}