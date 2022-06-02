public interface BankAccount {
    int getAccountNumber();
    int getBalance();
    void deposit(int amount);
    boolean isForeign();
    void setForeign(boolean foreign);
    boolean hasEnoughCollateral(int amount);
    String to_string();
}
