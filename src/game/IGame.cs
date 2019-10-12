using System;

namespace RotaryEngine
{
	namespace Game
	{
		public interface IGame
		{
			bool Init();
			void Shutdown();
			void Update(float afTimeStep);
		}
	} // namespace Game
} // namespace RotaryEngine