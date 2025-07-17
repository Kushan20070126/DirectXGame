#pragma once  
#include <DX3D/Core/Base.h>  
#include <DX3D/Core/Core.h>  
#include <memory> // Include this header for std::unique_ptr  

namespace dx3d  
{  
	class Game : public Base  
	{  
	public:  
		Game();  
		virtual ~Game() override;  

		virtual void run() final;  

	private:  
		std::unique_ptr<Window> m_display{}; // Ensure std::unique_ptr is defined by including <memory>  
		bool m_isRunning{ true };  
	};  
}
