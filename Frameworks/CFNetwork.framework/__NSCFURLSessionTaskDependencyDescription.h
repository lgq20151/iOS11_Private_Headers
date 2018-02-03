/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription {
    __NSURLSessionTaskDependencyResourceIdentifier * _dependent;
    bool  _exclusive;
    __NSURLSessionTaskDependencyResourceIdentifier * _parent;
    float  _priority;
}

- (id)_dependent;
- (id)_parent;
- (void)dealloc;
- (id)description;
- (bool)exclusive;
- (id)initWithPriority:(float)arg1 exclusive:(bool)arg2;
- (id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(bool)arg6;
- (float)priority;
- (void)setExclusive:(bool)arg1;
- (void)setPriority:(float)arg1;
- (void)set_dependent:(id)arg1;
- (void)set_parent:(id)arg1;

@end
