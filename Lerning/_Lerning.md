# 230615
## Lerning 

## ToDo 

## Log 
### Question 
- [ ] Question why is testet in "francinette/tests/printf/ printfTester/tests/d_test.cpp" --> printf("NULL %s NULL", NULL);

- Spechial Test Cases -- Counting during %c was a Problem and 
- counting during %i was a problem 
- counting during %u was a problem 

forgott to 
set the error 
```c
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}

```

I have 2 failures
in my francinette test.

??

Unfortunately I can't explain why.

I convert the void* to unsigned long long and print it with the unsigned int function.
