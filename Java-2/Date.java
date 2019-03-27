public class Date {
	private int year;
	private int month;
	private int day;

	public Date () {
		year = 1970;
		month = 1;
		day = 1;
	}

	public Date (int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;
		
		if (month > 12 || month < 1) {
			this.month = 1;
		}

		if (day > 31 || day < 1) {
			this.day = 1;
		}
	}

	public String showDate (Date d) {
		String s = d.year + "-" + d.month + '-' + d.day;
		return s;
	}


}