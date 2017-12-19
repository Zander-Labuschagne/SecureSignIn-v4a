#if defined (__MACH__) || defined(__linux__)
	#include <termios.h>
	#include <unistd.h>
#elif _WIN32
	#include <windows.h>
#endif

class TTY
{
	private:
		struct termios tty;
		void set_echo_unix(bool enabled);
		void set_echo_windows(bool enabled);
		void set_buffer_unix(bool enabled);
		void set_buffer_windows(bool enabled);
	public:
		void set_echo(bool enabled);
		void set_buffer(bool enabled);
};