import java.lang.*;

public class Library implements BookOperation,LibrarianOperation,UserOperation
{
	private Book books[] = new Book [500];
	private User users[] = new User [100];
	private Librarian librarians[] = new Librarian [10];
	
	public boolean insertBook(Book b)
	{
		boolean flag = false;
		for(int i = 0; i < books.length; i++)
		{
			if(books[i] == null)
			{
				books[i] = b;
				flag = true;
				break;
			}
		}
		return flag;
	}
	
	public boolean removeBook(Book b)
	{
		boolean flag = false;
		for(int i = 0; i < books.length; i++)
		{
			if(books[i] == b)
			{
				books[i] = null;
				flag = true;
				break;
			}
		}
		return flag;
	}
	
	public Book searchBook(String isbn2)
	{
		Book b = null;
		
		for(int i = 0; i < books.length; i++)
		{
			if(books[i] != null)
			{
				if(books[i].getIsbn().equals(isbn2))
				{
					b = books[i];
					break;
				}
			}
		}
		return b;
	}
	public void showAllBook()
	{	
		for(int i = 0; i< books.length; i++)
		{
			if(books[i] != null)
			{
				System.out.println("ALL BOOKS :");
				books[i].showDetails();

			}
		}
	}
		
	public boolean insertLibrarian(Librarian l)
	{
		boolean flag = false;
		for(int i = 0; i < librarians.length; i++)
		{
			if(librarians[i] == null)
			{
				librarians[i] = l;
				flag = true;
				break;
			}
		}
		return flag;
	}
	
	public boolean removeLibrarian(Librarian l)
	{
		boolean flag = false;
		for(int i = 0; i < librarians.length; i++)
		{
			if(librarians[i] == l)
			{
				librarians[i] = null;
				flag = true;
				break;
			}
		}
		return flag;
	}

	public Librarian searchLibrarian(int Id)
	{
		Librarian l = null;
		
		for(int i = 0; i < librarians.length; i++)
		{
			if(librarians[i] != null)
			{
				if(librarians[i].getLibrarianId()==Id)
				{
					l = librarians[i];
					break;
				}
			}
		}
		return l;
	}
	
	public void showAllLibrarian()
	{
		
		for(int i = 0; i < librarians.length; i++)
		{
			if(librarians[i] != null)
			{
				System.out.println("ALL Librarian :");
				librarians[i].showDetails();
			}
		}
	}
	
	
		public boolean insertUser(User u)
	{
		boolean flag = false;
		for(int i = 0; i < users.length; i++)
		{
			if(users[i] == null)
			{
				users[i] = u;
				flag = true;
				break;
			}
		}
		return flag;
	}
	
	public boolean removeUser(User u)
	{
		boolean flag = false;
		for(int i = 0; i < users.length; i++)
		{
			if(users[i] == u)
			{
				users[i] = null;
				flag = true;
				break;
			}
		}
		return flag;
	}

	public User searchUser(String email)
	{
		User u = null;
		
		for(int i = 0; i < users.length; i++)
		{
			if(users[i] != null)
			{
				if(users[i].getUserEmail().equals(email))
				{
					u = users[i];
					break;
				}
			}
		}
		return u;
	}
	
	public void showAllUser()
	{
		
		for(int i = 0; i < users.length; i++)
		{
			if(users[i] != null)
			{
				System.out.println("All USER :");
				users[i].showDetails();
			}
		}
	}
}






