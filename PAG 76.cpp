std::ofstream outf{ "sample.dat" };
outf<<"this is line 1"<<'\n';
outf<<"this is line 2"<<'\n';
outf.close();

outf.open("sample.dat", std::ios::app);
outf<<"this is line 3\n";
outf.close();