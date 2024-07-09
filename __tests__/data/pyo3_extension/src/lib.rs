use pyo3::prelude::*;

#[pyfunction]
fn say_hello(s: &str) {
    println!("Hello, {}!", s);
}

#[pymodule]
fn helloworld(m: &Bound<'_, PyModule>) -> PyResult<()> {
    m.add_function(wrap_pyfunction!(say_hello, m)?)?;
    Ok(())
}
