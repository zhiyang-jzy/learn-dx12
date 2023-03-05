#pragma once
#include <chrono>
namespace yang
{

	class GameTimer
	{
		typedef std::chrono::high_resolution_clock clock;
		typedef std::chrono::duration<double> duration;
	private:
		GameTimer();
		clock::time_point current_time_,prev_time_,base_time_,stop_time_;
		duration delta_time_;
		bool is_stop_;
	public:
		static GameTimer& GetInstance();
		void Tick();
		void Reset();
		double delta_time() const;
		bool IsStop()const { return is_stop_; }
		void Stop();
		void Start();

	};


}
