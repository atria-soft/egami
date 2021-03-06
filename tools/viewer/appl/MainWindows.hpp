/** @file
 * @author Edouard DUPIN
 * @copyright 2010, Edouard DUPIN, all right reserved
 * @license BSD v3 (see license file)
 */
#pragma once

#include <appl/debug.hpp>
#include <ewol/widget/Widget.hpp>
#include <ewol/widget/Windows.hpp>
#include <ewol/widget/Image.hpp>
namespace appl {
	class MainWindows : public ewol::widget::Windows {
		private:
			ewol::widget::ImageShared m_image;
			etk::Vector<etk::Path> m_listImages;
			int64_t m_idDisplayed;
		public:
			// Constructeur
			MainWindows();
			void init() override;
		public:
			DECLARE_FACTORY(MainWindows);
			~MainWindows() {};
			void setListOfFiles(etk::Vector<etk::Path> _listImages);
		protected:
			void onCallbackShortCut(const etk::String& _value);
			bool onEventInput(const ewol::event::Input& _event) override;
			bool onEventEntry(const ewol::event::Entry& _event) override;
	};
};


