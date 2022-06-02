public class Bank implements SavingsAccount, CheckingAccount  { 
    private BankAccount[] accounts;

    public void addInterest() {
        for (BankAccount account : accounts) {
            if (account instanceof SavingsAccount) {
                ((SavingsAccount) account).addInterest();
            }
        }
    }

    public int getAccountNumber () {
        return 0;
    }
    
    public int newAccount () {
        return 0;
    }

    public int getBalance () {
        return 0;
    }

    public void deposit (int amount) {

    }

    public boolean isForeign () {
        return false;
    }

    public void setForeign (boolean foreign) {

    }

    public boolean hasEnoughCollateral (int amount) {
        return false;
    }

    public String to_string () {
        return "";
    }


    
}
