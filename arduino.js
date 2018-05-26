const arduino = require('arduino-node');

const arduLatest = arduino({path: 'bin'});

arduLatest.run(['--verify', './your-project/your-project.ino'], (err, out) => {
  if (err) {
    console.log(err);
    return;
  }
  console.log(out.stdout);
});

const ardu180 = arduino({path: 'bin', version: '1.8.0'});

ardu180.run(['--verify', './your-project/your-project.ino'], (err, out) => {
  if (err) {
    console.log(err);
    return;
  }
  console.log(out.stdout);
});
