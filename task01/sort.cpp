

int bubble_sort(int* vector, int size) {
	int count = 0;

	for (int j = 0; j < size - 1; j++)
	{
		bool flag = true;
		for (int i = 0; i < size - 1 - j; i++)
		{
			if (vector[i] > vector[i + 1]) {
				int t = vector[i];
				vector[i] = vector[i + 1];
				vector[i + 1] = t;
				flag = false;
			}
			count++;
		}
		if (flag) {
			break;
		}
	}

	return count;
}

void selected_sort(int* vector, int size) {
	for (int j = 0; j < size; j++)
	{
		int index = j;
		for (int i = j + 1; i < size; i++)
		{
			if (vector[i] < vector[index]) {
				index = i;
			}
		}
		int t = vector[j];
		vector[j] = vector[index];
		vector[index] = t;
	}
}