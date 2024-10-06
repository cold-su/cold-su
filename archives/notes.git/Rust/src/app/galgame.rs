use device_query::{DeviceQuery, DeviceState, Keycode};

pub mod testing {
    pub fn start() {}
}

#[test]
pub fn move_man() -> () {
    loop {
        self::sleep(1000);
        if 0 == DeviceState::new().get_keys().len() {
            continue;
        }
        if Keycode::W == DeviceState::new().get_keys()[0] {
            print!("W");
        }
        if Keycode::A == DeviceState::new().get_keys()[0] {
            print!("A");
        }
    }
}
