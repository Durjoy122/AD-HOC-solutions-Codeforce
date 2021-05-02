import java.lang.*;


public interface UserOperation
{
	boolean insertUser(User u);
	boolean removeUser(User u);
	User searchUser(String email);
	void showAllUser();
}