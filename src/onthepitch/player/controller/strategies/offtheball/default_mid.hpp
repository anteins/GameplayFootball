// written by bastiaan konings schuiling 2008 - 2015
// this work is public domain. the code is undocumented, scruffy, untested, and should generally not be used for anything important.
// i do not offer support, so don't ask. to be used for inspiration :)

#ifndef _HPP_STRATEGY_DEFAULT_MIDFIELD
#define _HPP_STRATEGY_DEFAULT_MIDFIELD

#include "../strategy.hpp"

class DefaultMidfieldStrategy : public Strategy {

	public:
		DefaultMidfieldStrategy(ElizaController *controller);
		virtual ~DefaultMidfieldStrategy();

		virtual void RequestInput(const MentalImage *mentalImage, Vector3 &direction, float &velocity);

	protected:

};

#endif
