import { Board, Led } from 'johnny-five';

// Simulated ESP32 board configuration
const board = new Board({
  repl: true,
  debug: true,
  port: 'virtual-esp32'
});

board.on('ready', () => {
  console.log('ESP32 DevKitC V4 (Simulated) is ready!');

  // Built-in LED on GPIO 2
  const led = new Led(2);

  // Blink every second
  led.blink(1000);

  // Example of reading temperature (simulated)
  setInterval(() => {
    const temp = 20 + Math.random() * 5;
    console.log(`Temperature: ${temp.toFixed(1)}°C`);
  }, 2000);
});

board.on('error', (error) => {
  console.error('Board error:', error);
});