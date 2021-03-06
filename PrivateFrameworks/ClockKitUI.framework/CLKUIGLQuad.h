/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIGLQuad : CLKUIQuad {
    unsigned int  _isInitialized;
    unsigned int  _primaryTexture;
    CLKUIGLProgram * _program;
    unsigned int  _secondaryTexture;
    unsigned int  _vertexArray;
    unsigned int  _vertexBuffer;
}

- (void).cxx_destruct;
- (void)_initialize;
- (void)createVertexArray;
- (void)encode;

@end
