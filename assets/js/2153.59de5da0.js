"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([["2153"],{1864:function(t,e,a){function l(t,e){t.accDescr&&e.setAccDescription?.(t.accDescr),t.accTitle&&e.setAccTitle?.(t.accTitle),t.title&&e.setDiagramTitle?.(t.title)}a.d(e,{A:()=>l}),(0,a(5646).eW)(l,"populateCommonDb")},811:function(t,e,a){a.d(e,{diagram:()=>C});var l=a(1864),r=a(2255),o=a(288),c=a(5646),i=a(3194),n={packet:[]},s=structuredClone(n),d=c.vZ.packet,p=(0,c.eW)(()=>{let t=(0,r.Rb)({...d,...(0,c.iE)().packet});return t.showBits&&(t.paddingY+=10),t},"getConfig"),k=(0,c.eW)(()=>s.packet,"getPacket"),b={pushWord:(0,c.eW)(t=>{t.length>0&&s.packet.push(t)},"pushWord"),getPacket:k,getConfig:p,clear:(0,c.eW)(()=>{(0,c.ZH)(),s=structuredClone(n)},"clear"),setAccTitle:c.GN,getAccTitle:c.eu,setDiagramTitle:c.g2,getDiagramTitle:c.Kr,getAccDescription:c.Mx,setAccDescription:c.U$},g=(0,c.eW)(t=>{(0,l.A)(t,b);let e=-1,a=[],r=1,{bitsPerRow:o}=b.getConfig();for(let{start:l,end:i,label:n}of t.blocks){if(i&&i<l)throw Error(`Packet block ${l} - ${i} is invalid. End must be greater than start.`);if(l!==e+1)throw Error(`Packet block ${l} - ${i??l} is not contiguous. It should start from ${e+1}.`);for(e=i??l,c.cM.debug(`Packet block ${l} - ${e} with label ${n}`);a.length<=o+1&&b.getPacket().length<1e4;){let[t,e]=f({start:l,end:i,label:n},r,o);if(a.push(t),t.end+1===r*o&&(b.pushWord(a),a=[],r++),!e)break;({start:l,end:i,label:n}=e)}}b.pushWord(a)},"populate"),f=(0,c.eW)((t,e,a)=>{if(void 0===t.end&&(t.end=t.start),t.start>t.end)throw Error(`Block start ${t.start} is greater than block end ${t.end}.`);return t.end+1<=e*a?[t,void 0]:[{start:t.start,end:e*a-1,label:t.label},{start:e*a,end:t.end,label:t.label}]},"getNextFittingBlock"),u={parse:(0,c.eW)(async t=>{let e=await (0,i.Qc)("packet",t);c.cM.debug(e),g(e)},"parse")},h=(0,c.eW)((t,e,a,l)=>{let r=l.db,i=r.getConfig(),{rowHeight:n,paddingY:s,bitWidth:d,bitsPerRow:p}=i,k=r.getPacket(),b=r.getDiagramTitle(),g=n+s,f=g*(k.length+1)-(b?0:n),u=d*p+2,h=(0,o.P)(e);for(let[t,e]of(h.attr("viewbox",`0 0 ${u} ${f}`),(0,c.v2)(h,f,u,i.useMaxWidth),k.entries()))x(h,e,t,i);h.append("text").text(b).attr("x",u/2).attr("y",f-g/2).attr("dominant-baseline","middle").attr("text-anchor","middle").attr("class","packetTitle")},"draw"),x=(0,c.eW)((t,e,a,{rowHeight:l,paddingX:r,paddingY:o,bitWidth:c,bitsPerRow:i,showBits:n})=>{let s=t.append("g"),d=a*(l+o)+o;for(let t of e){let e=t.start%i*c+1,a=(t.end-t.start+1)*c-r;if(s.append("rect").attr("x",e).attr("y",d).attr("width",a).attr("height",l).attr("class","packetBlock"),s.append("text").attr("x",e+a/2).attr("y",d+l/2).attr("class","packetLabel").attr("dominant-baseline","middle").attr("text-anchor","middle").text(t.label),!n)continue;let o=t.end===t.start,p=d-2;s.append("text").attr("x",e+(o?a/2:0)).attr("y",p).attr("class","packetByte start").attr("dominant-baseline","auto").attr("text-anchor",o?"middle":"start").text(t.start),o||s.append("text").attr("x",e+a).attr("y",p).attr("class","packetByte end").attr("dominant-baseline","auto").attr("text-anchor","end").text(t.end)}},"drawWord"),$={byteFontSize:"10px",startByteColor:"black",endByteColor:"black",labelColor:"black",labelFontSize:"12px",titleColor:"black",titleFontSize:"14px",blockStrokeColor:"black",blockStrokeWidth:"1",blockFillColor:"#efefef"},C={parser:u,db:b,renderer:{draw:h},styles:(0,c.eW)(({packet:t}={})=>{let e=(0,r.Rb)($,t);return`
	.packetByte {
		font-size: ${e.byteFontSize};
	}
	.packetByte.start {
		fill: ${e.startByteColor};
	}
	.packetByte.end {
		fill: ${e.endByteColor};
	}
	.packetLabel {
		fill: ${e.labelColor};
		font-size: ${e.labelFontSize};
	}
	.packetTitle {
		fill: ${e.titleColor};
		font-size: ${e.titleFontSize};
	}
	.packetBlock {
		stroke: ${e.blockStrokeColor};
		stroke-width: ${e.blockStrokeWidth};
		fill: ${e.blockFillColor};
	}
	`},"styles")}}}]);