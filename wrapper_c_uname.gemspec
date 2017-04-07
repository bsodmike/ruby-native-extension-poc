Gem::Specification.new do |s|
  s.name    = "wrapper-c-uname"
  s.version = "0.1.0"
  s.summary = "System uname for Ruby"
  s.author  = "Michael de Silva"

  s.files = Dir.glob("ext/**/*.{c,rb}") +
            Dir.glob("lib/**/*.rb")

  s.extensions << "ext/wrapper_c_uname/extconf.rb"

  s.add_development_dependency "rake-compiler"
end