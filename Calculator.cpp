+#include <iostream>
+#include <clocale>
+using namespace std;
+
+int Sum ()
+{
+	int a, b;
+	int result;
+	cout << "Ââåäèòå 2 ÷èñëà: ";
+	cin >> a >> b;
+	result = a + b;
+	cout << result << endl;
+}
+
+int Sub ()
+{
+	int a, b;
+	int result;
+	cout << "Ââåäèòå 2 ÷èñëà: ";
+	cin >> a >> b;
+	result = a - b;
+	cout << result << endl;
+}
+
+int main ()
+{
+	setlocale (0, "");
+	Sum ();
+	Sub ();
+	system ("pause");
+	return 0;
+}
