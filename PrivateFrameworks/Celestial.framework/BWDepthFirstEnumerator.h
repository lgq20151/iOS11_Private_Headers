/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDepthFirstEnumerator : BWNodeEnumerator {
    unsigned long long  _currentSourceIndex;
    int  _ordering;
    NSMutableArray * _stack;
}

- (id)_nextUnvisitedChild:(id)arg1;
- (void)dealloc;
- (id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2;
- (id)nextObject;

@end
