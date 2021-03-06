/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKJSDOMElement, IKJSDOMParentNode, IKStyleableElement, NSObject, _IKJSDOMElement, _IKJSDOMElementProxy> {
    NSDictionary * _cachedAttributes;
    NSArray * _cachedChildElements;
    NSMutableDictionary * _metadataDict;
    <IKStyleableElement> * parentStyleableElement;
    IKViewElementStyleComposer * styleComposer;
}

@property (nonatomic, readonly) bool _isPrototypeElement;
@property (nonatomic, readonly, copy) IKDOMNamedNodeMap *attributes;
@property (nonatomic, readonly) unsigned long long childElementCount;
@property (nonatomic, readonly) IKDOMHTMLCollection *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *elementName;
@property (nonatomic, readonly) IKDOMElement *firstElementChild;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *innerHTML;
@property (nonatomic, readonly) IKDOMElement *lastElementChild;
@property (nonatomic, retain) NSString *outerHTML;
@property (nonatomic, readonly) <IKStyleableElement> *parentStyleableElement;
@property (nonatomic, retain) IKViewElementStyleComposer *styleComposer;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *tagName;

+ (id)_filteredAttributes;

- (void).cxx_destruct;
- (id)_attributes;
- (bool)_isPrototypeElement;
- (void)_markUpdatedForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (id)asPrivateIKJSDOMElement;
- (id)attributes;
- (id)childElementByTagName:(id)arg1;
- (unsigned long long)childElementCount;
- (id)childElements;
- (id)childElementsByTagName:(id)arg1;
- (id)children;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(bool)arg2;
- (id)domb_dataBinding;
- (void)domb_setDataBinding:(id)arg1;
- (id)dse_appDataSet;
- (id)dse_jsDataItems;
- (void)dse_setAppDataSet:(id)arg1;
- (void)dse_setJSDataItems:(id)arg1;
- (void)dse_setUsedPrototypesByType:(id)arg1;
- (id)dse_usedPrototypesByType;
- (id)elementName;
- (id)firstElementChild;
- (id)getAttribute:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (bool)hasAttribute:(id)arg1;
- (bool)hasAttributes;
- (id)innerHTML;
- (void)insertAdjacentHTML:(id)arg1 :(id)arg2;
- (id)lastElementChild;
- (id)nodeName;
- (long long)nodeType;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)outerHTML;
- (id)parentStyleableElement;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 :(id)arg2;
- (void)setAttributeValue:(id)arg1 withName:(id)arg2;
- (void)setInnerHTML:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOuterHTML:(id)arg1;
- (void)setStyleComposer:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)styleComposer;
- (id)tagName;
- (id)textContent;

@end
