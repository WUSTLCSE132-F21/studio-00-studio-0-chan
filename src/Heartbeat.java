class Heartbeat{
	public static void main(String[] args) {
		int time = 0;
		while(true) {
			System.out.println(time);
			time = time + 1;
			
			try{
				Thread.sleep(1000);
			}catch(InterruptedException e){
				System.out.println("interrupted");
			}
		}
	}
}