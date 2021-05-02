import java.lang.*;
public abstract class User 
{
	protected String userName;
    protected String userDepartment;
	protected String userBirthdate;
	protected String userBloodgroup;
	protected String userEmail;
	
	
	public User(){
		
	}
	public User(String userName, String userDepartment, String userBirthdate,String userBloodgroup ,String userEmail )
	{
		this.userName = userName;
		this.userDepartment = userDepartment;
	    this.userBirthdate =userBirthdate;
		this.userBloodgroup = userBloodgroup;
		this.userEmail = userEmail;
	}	
	
	public void setUserName(String userName)
	{
		this.userName = userName;
	}
	public void setUserDepartment(String userDepartment)
	{
		this.userDepartment = userDepartment;	
	}
	public void  setUserBirthdate(String userBirthdate)
	{
		this.userBirthdate =userBirthdate;
	}
	public void setUserBloodgroup(String userBloodgroup)
	{
		this.userBloodgroup =userBloodgroup;
	}
	public void setUserEmail(String userEmail)
	{
		this.userEmail = userEmail;
	}

	public String getUserName()
	{
		return userName; 
	}
	public String getUserDepartment()
	{
		return userDepartment; 
	}
	public String getUserBirthdate()
	{ 
		return userBirthdate;
	}
	public String getUserBloodgroup()
	{
		return userBloodgroup; 
	}
	public String getUserEmail()
	{ 
		return userEmail ;
	}

	public abstract void showDetails();
	
	
}