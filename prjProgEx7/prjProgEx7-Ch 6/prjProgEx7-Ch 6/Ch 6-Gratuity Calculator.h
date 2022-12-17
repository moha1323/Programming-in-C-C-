class Tips
{
public:
	Tips(double taxRate) {
		txRate = taxRate;
	};
	double computeTip(double totalBill, double tipRate) {
		double meal = mealCost(totalBill, txRate);
		return meal * tipRate;
	};

private:
	double txRate;
	double mealCost(double totalbill, double taxRate) {
		double s1 = totalbill / (1 + taxRate);
		double s2 = s1 * taxRate;
		return totalbill - s2;
	};
};


