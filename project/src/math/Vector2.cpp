#include <math/Vector2.h>


namespace lime {
	
	
	static int id_x;
	static int id_y;
	static bool init = false;
	
	
	Vector2::Vector2 () {
		
		x = 0;
		y = 0;
		
	}
	
	
	Vector2::Vector2 (value vec) {
		
		if (!init) {
			
			id_x = val_id ("x");
			id_y = val_id ("y");
			init = true;
			
		}
		
		x = val_number (val_field (vec, id_x));
		y = val_number (val_field (vec, id_y));
		
	}
	
	
}