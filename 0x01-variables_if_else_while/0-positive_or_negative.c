int main(void)

{ 
	int n;



	rand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf(n, "is positive \n");
	}

	if(n == 0)
	{ 
		printf(n, "is zero");

	}

	 if (n < 0) {
		 printf(n, "is positive\n");

	}
					/* your code goes there */
	return (0);

}
