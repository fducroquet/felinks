#ifndef EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLOBJECTELEMENT_H
#define EL__DOCUMENT_DOM_ECMASCRIPT_SPIDERMONKEY_HTML_HTMLOBJECTELEMENT_H

#include "document/dom/ecmascript/spidermonkey/html/HTMLElement.h"
#include "ecmascript/spidermonkey/util.h"

extern const JSClass HTMLObjectElement_class;
extern const JSFunctionSpec HTMLObjectElement_funcs[];
extern const JSPropertySpec HTMLObjectElement_props[];

struct OBJECT_struct {
	struct HTMLElement_struct html;
	unsigned char *form; /* FIXME: proper type */
	unsigned char *code;
	unsigned char *align;
	unsigned char *archive;
	unsigned char *border;
	unsigned char *code_base;
	unsigned char *code_type;
	unsigned char *data;
	unsigned char *declare;
	unsigned char *height;
	unsigned char *hspace;
	unsigned char *name;
	unsigned char *standby;
	unsigned char *tab_index;
	unsigned char *type;
	unsigned char *use_map;
	unsigned char *vspace;
	unsigned char *width;
	unsigned char *content_document; /* FIXME: proper type */
};

#endif