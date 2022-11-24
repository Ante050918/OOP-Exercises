#include "japanez.hpp"


int main() {
	int guess;
	game g;
	humanplayer h;
	computerplayer c;

	while (g.game_loop(h.p, c.p)) {
		g.display_score(h.p, c.p);
		h.human_input();
		c.computer_input();

		while (true) {
			guess = h.human_guess();
			if (g.check_guess(c.sumh, guess)) {
				g.increase_points(h.p);
				break;
			}
			guess = c.computer_guess();
			if (g.check_guess(h.sumh, guess)) {
				g.increase_points(c.p);
				break;
			}
		}
	}
}
