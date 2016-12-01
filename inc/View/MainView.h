#include <Elementary.h>
#include <cairo.h>

namespace view {

	class MainView {
	public:
		MainView();
		~MainView();

		Evas_Object *GetEvasObject();
	private:
		Evas_Object *win_;
		Evas_Object *conformant_;
		Evas_Object *layout_;

		Evas_Object *grid_ = nullptr;
		Evas_Object *trace_ = nullptr;

		int lyW_, lyH_, lyX_, lyY_;

		void CreateContent();
		void CreateMenu();
		void CreateBg();
		void CreateGrid(cairo_t *cairo, cairo_surface_t *surface);
		void CreateXYAxis(cairo_t *cairo, cairo_surface_t *surface);
		void CreateTrace();
		Evas_Object *CreateMenuButton(const char* name);
		static void LayoutResizeCb(void *data, Evas *e, Evas_Object *obj, void *event_info);
		static void ButtonClickedCb(void *data, Evas_Object *obj, void *event_info);
		static void WinDeleteRequestCb(void *data, Evas_Object *obj, void *event_info);

	};
}