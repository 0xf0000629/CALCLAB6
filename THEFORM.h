#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>
namespace CALCLAB6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ THEFORM
	/// </summary>
	public ref class THEFORM : public System::Windows::Forms::Form
	{
	public:
		THEFORM(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Эсвободить все используемые ресурсы.
		/// </summary>
		~THEFORM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ table;
	protected:



	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Button^ btnRUN;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ statusbar;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ function;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ xlStr;
	private: System::Windows::Forms::TextBox^ xrStr;
	private: System::Windows::Forms::TextBox^ hStr;




	private: System::Windows::Forms::ComboBox^ method;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ epsStr;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ yStr;
	private: System::Windows::Forms::Label^ label4;



	protected:

	private:
		/// <summary>
		/// Эб§зательна§ переменна§ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->epsStr = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->hStr = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->method = (gcnew System::Windows::Forms::ComboBox());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->xrStr = (gcnew System::Windows::Forms::TextBox());
			this->xlStr = (gcnew System::Windows::Forms::TextBox());
			this->function = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnRUN = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->statusbar = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->yStr = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// table
			// 
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Location = System::Drawing::Point(12, 211);
			this->table->Name = L"table";
			this->table->Size = System::Drawing::Size(728, 129);
			this->table->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->yStr);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->epsStr);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->hStr);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->method);
			this->groupBox1->Controls->Add(this->xLabel);
			this->groupBox1->Controls->Add(this->xrStr);
			this->groupBox1->Controls->Add(this->xlStr);
			this->groupBox1->Controls->Add(this->function);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(728, 167);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"INPUT AREA 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(182, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 29);
			this->label1->TabIndex = 13;
			this->label1->Text = L"EPS:";
			// 
			// epsStr
			// 
			this->epsStr->Location = System::Drawing::Point(241, 114);
			this->epsStr->Name = L"epsStr";
			this->epsStr->Size = System::Drawing::Size(111, 30);
			this->epsStr->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"h:";
			// 
			// hStr
			// 
			this->hStr->Location = System::Drawing::Point(42, 114);
			this->hStr->Name = L"hStr";
			this->hStr->Size = System::Drawing::Size(111, 30);
			this->hStr->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(141, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 29);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Method:";
			// 
			// method
			// 
			this->method->FormattingEnabled = true;
			this->method->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"euler (single step)", L"euler improved (single step)",
					L"miln (multistep)"
			});
			this->method->Location = System::Drawing::Point(241, 20);
			this->method->Name = L"method";
			this->method->Size = System::Drawing::Size(186, 31);
			this->method->TabIndex = 12;
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xLabel->Location = System::Drawing::Point(6, 26);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(87, 29);
			this->xLabel->TabIndex = 3;
			this->xLabel->Text = L"X array";
			// 
			// xrStr
			// 
			this->xrStr->Location = System::Drawing::Point(209, 63);
			this->xrStr->Name = L"xrStr";
			this->xrStr->Size = System::Drawing::Size(111, 30);
			this->xrStr->TabIndex = 8;
			// 
			// xlStr
			// 
			this->xlStr->Location = System::Drawing::Point(11, 63);
			this->xlStr->Name = L"xlStr";
			this->xlStr->Size = System::Drawing::Size(111, 30);
			this->xlStr->TabIndex = 1;
			// 
			// function
			// 
			this->function->FormattingEnabled = true;
			this->function->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->function->Location = System::Drawing::Point(597, 18);
			this->function->Name = L"function";
			this->function->Size = System::Drawing::Size(125, 31);
			this->function->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(539, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 29);
			this->label2->TabIndex = 7;
			this->label2->Text = L"f(x)";
			// 
			// btnRUN
			// 
			this->btnRUN->Location = System::Drawing::Point(746, 30);
			this->btnRUN->Name = L"btnRUN";
			this->btnRUN->Size = System::Drawing::Size(110, 674);
			this->btnRUN->TabIndex = 5;
			this->btnRUN->Text = L"GO!!!!";
			this->btnRUN->UseVisualStyleBackColor = true;
			this->btnRUN->Click += gcnew System::EventHandler(this, &THEFORM::btnRUN_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 346);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(728, 358);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// statusbar
			// 
			this->statusbar->Location = System::Drawing::Point(12, 185);
			this->statusbar->Name = L"statusbar";
			this->statusbar->Size = System::Drawing::Size(728, 20);
			this->statusbar->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(128, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"<= x <=";
			// 
			// yStr
			// 
			this->yStr->Location = System::Drawing::Point(388, 62);
			this->yStr->Name = L"yStr";
			this->yStr->Size = System::Drawing::Size(111, 30);
			this->yStr->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(339, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 29);
			this->label6->TabIndex = 16;
			this->label6->Text = L"y0:";
			// 
			// THEFORM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 716);
			this->Controls->Add(this->statusbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnRUN);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->table);
			this->Name = L"THEFORM";
			this->Text = L"THEFORM";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void THEFORM_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: double to_double(System::String^ str) {
		const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
		std::string ss = chars;

		// Free the allocated memory for const char*
		System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
		std::istringstream iss(ss);
		double result;
		iss >> result;
		return result;
	}
	private: std::string to_normal(System::String^ str) {
		const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
		std::string ss = chars;
		return ss;
	}
	private: System::String^ to_system(std::string s) {
		array<Byte>^ bytes = gcnew array<Byte>(s.length());
		System::Runtime::InteropServices::Marshal::Copy((IntPtr)(char*)s.c_str(), bytes, 0, s.length());

		System::String^ managedString = System::Text::Encoding::UTF8->GetString(bytes);
		return managedString;
	}
	private: double min(double a, double b) {
		if (a < b) return a; else return b;
	}
	private: double max(double a, double b) {
		if (a > b) return a; else return b;
	}
	private: void drawitall(double minx, double miny, double maxx, double maxy, std::vector <double> vx, std::vector <double> vy, System::String^ col) {
		Graphics^ canvas = pictureBox1->CreateGraphics();
		Color c_color = Color::FromName(col);
		Pen^ colorPen = (gcnew Pen(c_color, 2.0));

		Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
		Brush^ brush = Brushes::Black;
		Brush^ brushr = Brushes::Red;

		SizeF textSize;

		double horiz = maxx - minx;
		double vert = maxy - miny;

		try {
			for (int i = 0;i < vx.size() - 1;i++) {
				double gx1 = vx[i];double gx2 = vx[i + 1];
				double gy1 = vy[i];double gy2 = vy[i + 1];
				canvas->DrawLine(colorPen,
					float((gx1 - minx) / horiz * pictureBox1->Width),
					float((1 - (gy1 - miny) / vert) * pictureBox1->Height),
					float((gx2 - minx) / horiz * pictureBox1->Width),
					float((1 - (gy2 - miny) / vert) * pictureBox1->Height));
			}
		}
		catch (...) {
		}
		return;
	}
	private: void drawdots(double minx, double miny, double maxx, double maxy, std::vector <double> vx, std::vector <double> vy) {
		Graphics^ canvas = pictureBox1->CreateGraphics();
		Color c_color = Color::FromName("Black");
		Pen^ colorPen = (gcnew Pen(c_color, 5.0));

		Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
		Brush^ brush = Brushes::Black;
		Brush^ brushr = Brushes::Red;

		SizeF textSize;

		double horiz = maxx - minx;
		double vert = maxy - miny;

		for (int i = 0;i < vx.size();i++) {
			double gx1 = vx[i];
			double gy1 = vy[i];
			canvas->DrawEllipse(colorPen, (gx1 - minx) / horiz * pictureBox1->Width,
				(1 - (gy1 - miny) / vert) * pictureBox1->Height, 1.0, 1);
		}
		return;
	}
	private: void canv_clear(double minx, double miny, double maxx, double maxy) {
		Graphics^ canvas = pictureBox1->CreateGraphics();
		Color c_white = Color::FromName("White");
		canvas->Clear(c_white);

		Color c_color = Color::FromName("LightGray");
		Pen^ colorPen = (gcnew Pen(c_color, 2.0));

		Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
		Brush^ brush = Brushes::LightGray;
		Brush^ brushr = Brushes::Red;

		SizeF textSize;

		double horiz = maxx - minx;
		double vert = maxy - miny;

		float x1 = 0;
		float x2 = 0;
		float y1 = 0;
		float y2 = 0;

		double tx = 1;
		while (fabs(horiz) < 10) { horiz *= 10; tx *= 10; }
		double xrange = 1 / tx;
		horiz /= tx;
		double ty = 1;
		while (fabs(vert) < 10) { vert *= 10; ty *= 10; }
		double yrange = 1 / ty;
		vert /= ty;

		for (double i = floor(minx); i < ceil(maxx); i += xrange * 4) {
			x1 = i;
			x2 = i;
			canvas->DrawLine(colorPen,
				(x1 - minx) / horiz * pictureBox1->Width,
				pictureBox1->Height + 5,
				(x2 - minx) / horiz * pictureBox1->Width,
				pictureBox1->Height - 5);
			textSize = canvas->MeasureString((i).ToString("F2"), font);
			canvas->DrawString((i).ToString("F2"), font, brush,
				(x1 - minx) / horiz * pictureBox1->Width - textSize.Width / 2,
				pictureBox1->Height - textSize.Height);
		}

		for (double i = floor(miny); i < ceil(maxy); i += yrange * 4) {
			y1 = i;
			y2 = i;
			canvas->DrawLine(colorPen,
				-5,
				(1 - (y1 - miny) / vert) * pictureBox1->Height,
				5,
				(1 - (y2 - miny) / vert) * pictureBox1->Height);
			textSize = canvas->MeasureString((i).ToString("F2"), font);
			canvas->DrawString((i).ToString("F2"), font, brush,
				5,
				(1 - ((y1)-miny) / vert) * pictureBox1->Height - textSize.Height / 2);
		}
		return;
	}
	double f(double x, double y) {
		switch (function->SelectedIndex) {
			case 0: return x / 3 + y * 7;
			case 1: return x * x + y / 9;
			case 2: return x * sqrt(y);
		}
	}
	double fy(double x, double c) {
		switch (function->SelectedIndex) {
			case 0: return c * exp(7 * x) - x/21 - 1/147;
			case 1: return c * exp(x / 9) - 9*x*x - 162*x - 1458;
			case 2: return 1/16 * (4*c*x*x + 4*c*c + x*x*x*x);
		}
	}
	private: std::vector<std::string> split(std::string k) {
		std::vector<std::string> result;
		System::String^ s = to_system(k);
		array<System::String^>^ parts = s->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);

		for (int i = 0; i < parts->Length; i++)
		{
			System::String^ b = parts[i];
			result.push_back(to_normal(b));
		}

		return result;
	}
	private: void tableit(std::vector <std::string> a) {
		std::vector <std::vector<std::string> > v;
		int i, j;
		for (i = 0;i < a.size();i++) {
			v.push_back(split(a[i]));
		}
		table->ColumnHeadersVisible = true;
		table->Columns->Clear();
		for (j = 0;j < v[0].size();j++) {
			table->Columns->Add(to_system(v[0][j]), to_system(v[0][j]));
		}
		for (i = 1;i < v.size();i++) {
			table->Rows->Add();
			for (j = 0;j < v[i].size();j++) {
				table->Rows[i - 1]->Cells[j]->Value = to_system(v[i][j]);
			}
		}
		return;
	}
	double eps = 0.01;
	std::vector <double> euler(double xl, double xr, double h, double y0) {
		std::vector <double> yyp;
		std::vector <double> yy;
		do {
			yy.clear(); yy.push_back(y0);
			double x, y = y0;
			for (x = xl; x < xr - h / 2; x += h) {
				y = y + h * f(x, y);
				yy.push_back(y);
			}
			h /= 2;
			yyp.clear(); yyp.push_back(y0);
			x, y = y0;
			for (x = xl; x < xr - h / 2; x += h) {
				y = y + h * f(x, y);
				yyp.push_back(y);
			}
		} while (abs(yyp[1]-yy[1]) > eps);
		return yy;
	}
	std::vector <double> euler_better(double xl, double xr, double h, double y0) {
		std::vector <double> yyp;
		std::vector <double> yy;
		do {
			yy.clear(); yy.push_back(y0);
			double x, y = y0;
			for (x = xl; x < xr - h / 2; x += h) {
				y = y + h / 2 * (f(x, y) + f(x + h, y + h * f(x, y)));
				yy.push_back(y);
			}
			h /= 2;
			yyp.clear(); yyp.push_back(y0);
			x, y = y0;
			for (x = xl; x < xr - h / 2; x += h) {
				y = y + h / 2 * (f(x, y) + f(x + h, y + h * f(x, y)));
				yyp.push_back(y);
			}
		} while (abs(yyp[1] - yy[1]) > eps);
		return yy;
	}
	std::vector <double> miln(double xl, double xr, double h, double y0) {
		std::vector <double> yy = euler_better(xl, xl + 3 * h, h, y0);
		double x, i = 4;
		for (x = xl + 4 * h; x < xr; x += h) {
			yy.push_back(0);
			yy[i] = yy[i - 4] + 4 * h / 3 * (2 * f(x - 3 * h, yy[i - 3]) - f(x - 2 * h, yy[i - 2]) + 2 * f(x - h, yy[i - 1]));
			double yy_fix = yy[i - 2] + h / 3 * (f(x - 2 * h, yy[i - 2]) + 4 * f(x - h, yy[i - 1]) + f(x, yy[i]));
			while (abs(yy_fix - yy[i]) > eps) {
				yy[i] = yy_fix;
				yy_fix = yy[i - 2] + h / 3 * (f(x - 2 * h, yy[i - 2]) + 4 * f(x - h, yy[i - 1]) + f(x, yy[i]));
			}
			yy[i] = yy_fix;
			i++;
		}
		return yy;
	}

	private: System::Void btnRUN_Click(System::Object^ sender, System::EventArgs^ e) {
		double minx = 999999999, miny = 999999999;
		double maxx = -999999999, maxy = -999999999;
		try {
			switch (method->SelectedIndex) {
			case 0: {
				double xl = to_double(xlStr->Text);
				double xr = to_double(xrStr->Text);
				double y0 = to_double(yStr->Text);
				double h = to_double(hStr->Text);
				eps = to_double(epsStr->Text);
				std::vector <std::string> a;
				std::vector <double> vx;
				std::vector <double> vy = euler(xl, xr, h, y0);
				std::vector <double> vya;
				a.push_back("x y");
				for (int i = 0;i < vy.size();i++) {
					vx.push_back(xl + i * h);
					vya.push_back(fy(vx[i], 0));
					a.push_back("");
					a[i + 1] += to_normal((xl + h * i).ToString() + " ");
					a[i + 1] += to_normal(vy[i].ToString() + " ");
					minx = min(minx, vx[i]);
					miny = min(miny, vy[i]);
					maxx = max(maxx, vx[i]);
					maxy = max(maxy, vy[i]);
				}
				tableit(a);
				canv_clear(minx, miny, maxx, maxy);
				drawitall(minx, miny, maxx, maxy, vx, vya, "Red");
				drawitall(minx, miny, maxx, maxy, vx, vy, "Blue");
				break;
			}
			case 1: {
				double xl = to_double(xlStr->Text);
				double xr = to_double(xrStr->Text);
				double y0 = to_double(yStr->Text);
				double h = to_double(hStr->Text);
				eps = to_double(epsStr->Text);
				std::vector <std::string> a;
				std::vector <double> vx;
				std::vector <double> vy = euler_better(xl, xr, h, y0);
				std::vector <double> vya;
				a.push_back("x y");
				for (int i = 0;i < vy.size();i++) {
					vx.push_back(xl + i * h);
					vya.push_back(fy(vx[i], 0));
					a.push_back("");
					a[i + 1] += to_normal((xl + h * i).ToString() + " ");
					a[i + 1] += to_normal(vy[i].ToString() + " ");
					minx = min(minx, vx[i]);
					miny = min(miny, vy[i]);
					maxx = max(maxx, vx[i]);
					maxy = max(maxy, vy[i]);
				}
				tableit(a);
				canv_clear(minx, miny, maxx, maxy);
				drawitall(minx, miny, maxx, maxy, vx, vya, "Red");
				drawitall(minx, miny, maxx, maxy, vx, vy, "Blue");
				break;
			}
			case 2: {
				double xl = to_double(xlStr->Text);
				double xr = to_double(xrStr->Text);
				double y0 = to_double(yStr->Text);
				double h = to_double(hStr->Text);
				eps = to_double(epsStr->Text);
				std::vector <std::string> a;
				std::vector <double> vx;
				std::vector <double> vy = miln(xl, xr, h, y0);
				std::vector <double> vya;
				a.push_back("x y");
				for (int i = 0;i < vy.size();i++) {
					vx.push_back(xl + i * h);
					vya.push_back(fy(vx[i], 0));
					a.push_back("");
					a[i + 1] += to_normal((xl + h * i).ToString() + " ");
					a[i + 1] += to_normal(vy[i].ToString() + " ");
					minx = min(minx, vx[i]);
					miny = min(miny, vy[i]);
					maxx = max(maxx, vx[i]);
					maxy = max(maxy, vy[i]);
				}
				tableit(a);
				canv_clear(minx, miny, maxx, maxy);
				drawitall(minx, miny, maxx, maxy, vx, vya, "Red");
				drawitall(minx, miny, maxx, maxy, vx, vy, "Blue");
				break;
			}
			}
			statusbar->Text = "Success!";
		}
		catch (...) {
			statusbar->Text = "Invalid input.";
		}
	}
};
}