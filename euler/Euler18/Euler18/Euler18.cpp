#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "759564174782183587102004824765190123750334880277730763679965042806167092414126568340807033414872334732371694295371446525439152975114701133287773177839681757917152381714914358502729486366046889536730731669874031046298272309709873933853600423";

	int y = 15;
	int** m = new int* [y];

	for (int i = 0; i < y; i++)
	{
		m[i] = new int[i + 1];
	}


	int z = 0;
	// insert
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			m[i][j] = stoi(str.substr(z, 2));
			z += 2;
		}
	}

	// print
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << " " << m[i][j];
		}
		cout << endl;
	}

	int sum = 0, maxsum = 0;

	cout << endl;

	for (int i_1 = 0; i_1 < 1; i_1++)
	{
		for (int i_2 = i_1; i_2 <= i_1 + 1; i_2++)
		{
			for (int i_3 = i_2; i_3 <= i_2 + 1; i_3++)
			{
				for (int i_4 = i_3; i_4 <= i_3 + 1; i_4++)
				{
					for (int i_5 = i_4; i_5 <= i_4 + 1; i_5++)
					{
						for (int i_6 = i_5; i_6 <= i_5 + 1; i_6++)
						{
							for (int i_7 = i_6; i_7 <= i_6 + 1; i_7++)
							{
								for (int i_8 = i_7; i_8 <= i_7 + 1; i_8++)
								{
									for (int i_9 = i_8; i_9 <= i_8 + 1; i_9++)
									{
										for (int i_10 = i_9; i_10 <= i_9 + 1; i_10++)
										{
											for (int i_11 = i_10; i_11 <= i_10 + 1; i_11++)
											{
												for (int i_12 = i_11; i_12 <= i_11 + 1; i_12++)
												{
													for (int i_13 = i_12; i_13 <= i_12 + 1; i_13++)
													{
														for (int i_14 = i_13; i_14 <= i_13 + 1; i_14++)
														{
															for (int i_15 = i_14; i_15 <= i_14 + 1; i_15++)
															{
																sum =   m[0][0] + m[1][i_2] + m[2][i_3] + m[3][i_4]
																    + m[4][i_5] + m[5][i_6] + m[6][i_7] + m[7][i_8]
																	+ m[8][i_9] + m[9][i_10] + m[10][i_11] + m[11][i_12]
																	+ m[12][i_13] + m[13][i_14] + m[14][i_15];
																if (sum > maxsum) maxsum = sum;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cout << "maxsum = " << maxsum;



	/*
		ALGORITMU
		PENTRU
		Y = 4
	*/

	//string str = "3 7 4 2 4 6 8 5 9 3";

	//int y = 4;
	//int** m = new int* [y];

	//for (int i = 0; i < y; i++)
	//{
	//	m[i] = new int[i + 1];
	//}


	//int z = 0;
	//// insert
	//for (int i = 0; i < y; i++)
	//{
	//	for (int j = 0; j < i + 1; j++)
	//	{
	//		m[i][j] = str[z] - 48;
	//		z+=2;
	//	}
	//}

	//// print
	//for (int i = 0; i < y; i++)
	//{
	//	for (int j = 0; j < i + 1; j++)
	//	{
	//		cout << " " << m[i][j];
	//	}
	//	cout << endl;
	//}

	//int sum = 0, maxsum = 0;

	//cout << endl;

	//for (int i_1 = 0; i_1 < 1; i_1++)
	//{
	//	//sum += m[0][0];
	//	//cout << " " << m[0][0];
	//	for (int i_2 = i_1; i_2 <= i_1 + 1; i_2++)
	//	{
	//		//sum += m[1][i_2];
	//		//cout << " " << m[1][i_2];
	//		for (int i_3 = i_2; i_3 <= i_2 + 1; i_3++)
	//		{
	//			//sum += m[2][i_3];
	//			//cout << " " << m[2][i_3];
	//			for (int i_4 = i_3; i_4 <= i_3 + 1; i_4++)
	//			{
	//				//sum += m[3][i_4];
	//				sum = m[0][0] + m[1][i_2] + m[2][i_3] + m[3][i_4];
	//				cout << " " << m[0][0] << " " << m[1][i_2] << " " << m[2][i_3] << " " << m[3][i_4];
	//				cout << " / s = " << sum << "\t";
	//				if (sum > maxsum) maxsum = sum;
	//				system("pause");
	//			}
	//		}
	//	}
	//}

	//cout << "maxsum = " << maxsum;

	return 0;
}
