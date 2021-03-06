#ifndef H_TRANSFORMER
#define H_TRANSFORMER

#include "Vertex.h"
#include "Matrix.h"

class Transformer {

public:

  void rotate( double degrees );

  void scale( double x, double y );

  void translate( double x, double y );

  void operator()( Vertex& v ) const;

private:

  static Matrix<3,3> Rotate( double degrees );

  static Matrix<3,3> Scale( double x, double y );

  static Matrix<3,3> Translate( double x, double y );

  Matrix<3,3> state;

};

#endif
