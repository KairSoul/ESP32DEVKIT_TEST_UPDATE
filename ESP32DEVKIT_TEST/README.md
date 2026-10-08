# ESP32DEVKIT_TEST
- Phần cứng: có một nút bấm nhả (push button), 1 button để chọn led điều khiển và 2 LED hiển thị gắn vào gpio4 va gpio 2
- Yêu cầu Viết chương trình có chức năng sau:
  +bấm nút một lần (single click) để bật/tắt LED điều khiển (đảo trạng thái).
  +nhấn giữ >2s (hold) thì LED điều khiển sẽ chuyển sang trạng thái nhấp nháy liên tục (blink 200ms một lần)
  +nếu tiếp tục nhấn single click thì LED điều khiển lại chuyển trạng thái bật/tắt
  + nếu nhấn button 2 lần (doubleclick) thì thay đổi led điều khiển

Lưu ý: khử rung phím bấm

@ Mục đích DEMO
- Project này sử dụng thư viện mã mở nổi tiếng gần đây là OneButton và thư viện LED tự viết:

  + OneButton tác giả Matthias Hertel: https://github.com/mathertel/OneButton
  + LED.h Cung cấp API sáng sủa để khởi tạo và điều khiển LED (đảo trạng thái - flip, và nháy - blink)
  + Việc gom các chức năng đọc phím bấm và điều khiển LED như trên vào các thư viện để có thể tái sử dụng, và giúp mã sáng sủa hơn. Các chức năng như trong yêu cầu xuất hiện rất phổ biến ở hầu hết tất cả các project vi điều khiển.
