public class Singleton {
    // 使用静态内部类的方式实现单例模式，且线程安全

    // 屏蔽构造方法
    private Singleton() {}

    // 内部类并生成一个 final 的实例
    private static class Holder{
        private static final Singleton INSTANCE = new Singleton();
    }

    public static Singleton getInstance() {
        return Holder.INSTANCE;
    }
}