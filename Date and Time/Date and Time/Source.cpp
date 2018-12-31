struct tm {
	int tm_sec;   // so giay trong mot phut, tu 0 toi 61
	int tm_min;   // so phut trong mot gio, tu 0 toi 59
	int tm_hour;  // so gio trong mot ngay, tu 0 toi 24
	int tm_mday;  // ngay trong thang, tu 1 toi 31
	int tm_mon;   // thang trong nam, tu 0 toi 11
	int tm_year;  // nam, bat dau tu 1900
	int tm_wday;  // ngay, bat dau tu Sunday
	int tm_yday;  // ngay, bat dau tu 1/1
	int tm_isdst; // so gio cua Daylight Savings Time
}